void fun()
{
  int entity_5 = 74;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char entity_4[81] = "";
  entity_4 = NULL;
  char* entity_2;
  char entity_1[31] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[17-1]='';
  memset(entity_1, 'a', 31-1);
  entity_1[31-1]='';
  memset(entity_4, 'j', 81-1);
  entity_4[81-1]='';
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  memset(entity_9, 'r', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_3, entity_9, entity_5*sizeof(char));
}
void fun()
{
  int entity_5 = 84;
  char* entity_3;
  char* entity_2;
  char entity_0 = 'Z';
  char entity_9[75] = "";
  entity_9 = NULL;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'W', entity_5-1);
  entity_4[entity_5-1]='';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  memset(entity_9, 'r', 75-1);
  entity_9[75-1]='';
  entity_2 = (char*)malloc(21*sizeof(char));
  entity_2[21-1]='';
  memcpy(entity_2, entity_4, entity_5*sizeof(char));
}
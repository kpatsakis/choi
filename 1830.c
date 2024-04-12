void fun()
{
  int entity_9 = 76;
  int entity_4 = 60;
  char entity_7[91] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_1[17] = "";
  entity_1 = NULL;
  memset(entity_1, 'f', 17-1);
  entity_1[17-1]='';
  memset(entity_7, 'I', 91-1);
  entity_7[91-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memcpy(entity_2, entity_7, 91*sizeof(char));
}
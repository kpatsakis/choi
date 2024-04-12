void fun()
{
  int entity_6 = 62;
  int entity_3 = 26;
  entity_6 = 58;
  char entity_9[10] = "";
  entity_9 = NULL;
  char entity_2 = 'V';
  char* entity_7;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_9, 'i', 10-1);
  entity_9[10-1]='';
  memcpy(entity_7, entity_9, 10*sizeof(char));
}
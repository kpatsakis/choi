void fun()
{
  int entity_2 = 51;
  char* entity_6;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_4[11] = "";
  entity_4 = NULL;
  memset(entity_4, 'K', 11-1);
  entity_4[11-1]='';
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  memset(entity_7, 'y', entity_2-1);
  entity_7[entity_2-1]='';
  memcpy(entity_6, entity_7, entity_2*sizeof(char));
}
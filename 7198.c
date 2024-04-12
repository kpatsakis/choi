void fun()
{
  int entity_3 = 63;
  char* entity_6;
  char entity_1[58] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'a', 58-1);
  entity_1[58-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  memcpy(entity_7, entity_1, 58*sizeof(char));
}
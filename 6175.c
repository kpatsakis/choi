void fun()
{
  int entity_8 = 77;
  char* entity_2;
  char entity_5[61] = "";
  entity_5 = NULL;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(72*sizeof(char));
  entity_2[72-1]='';
  memset(entity_5, 'F', 61-1);
  entity_5[61-1]='';
  memset(entity_6, 'Z', entity_8-1);
  entity_6[entity_8-1]='';
  memcpy(entity_2, entity_6, entity_8*sizeof(char));
}
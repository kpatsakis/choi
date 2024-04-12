void fun()
{
  int entity_6 = 21;
  char entity_0[25] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'j', 25-1);
  entity_0[25-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  entity_6 = 65;
  memcpy(entity_8, entity_0, 25*sizeof(char));
}
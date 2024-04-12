void fun()
{
  int entity_6 = 32;
  char entity_3[66] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'l', 66-1);
  entity_3[66-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  entity_6 = 44;
  memcpy(entity_0, entity_3, 66*sizeof(char));
}
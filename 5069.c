void fun()
{
  int entity_8 = 51;
  char entity_0[42] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'z', 42-1);
  entity_0[42-1]='';
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[5-1]='';
  memcpy(entity_7, entity_0, 42*sizeof(char));
}
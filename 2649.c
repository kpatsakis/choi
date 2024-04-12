void fun()
{
  int entity_9 = 81;
  char* entity_3;
  char entity_8[42] = "";
  entity_8 = NULL;
  char entity_6 = 'N';
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  memset(entity_8, 'p', 42-1);
  entity_8[42-1]='';
  memcpy(entity_3, entity_8, 42*sizeof(char));
}
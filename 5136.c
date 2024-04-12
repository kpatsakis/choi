void fun()
{
  int entity_9 = 82;
  char entity_8[100] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(42*sizeof(char));
  entity_6[42-1]='';
  memset(entity_8, 'l', 100-1);
  entity_8[100-1]='';
  entity_8[entity_9] = 'l';
}
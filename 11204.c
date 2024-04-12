void fun()
{
  char* entity_7;
  char entity_0[72] = "";
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'z', 72-1);
  entity_0[72-1]='0';
  strcpy(entity_7, entity_0);
}
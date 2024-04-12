void fun()
{
  int entity_0 = 19;
  char entity_6[11] = "";
  char* entity_7;
  memset(entity_6, 'N', 11-1);
  entity_6[11-1]='0';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_6);
}
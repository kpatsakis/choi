void fun()
{
  char* entity_7;
  char entity_0[14] = "";
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'b', 14-1);
  entity_0[14-1]='0';
  strcpy(entity_7, entity_0);
}
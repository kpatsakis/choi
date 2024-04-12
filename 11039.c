void fun()
{
  char* entity_1;
  char entity_0[11] = "";
  memset(entity_0, 'k', 11-1);
  entity_0[11-1]='0';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_0);
}
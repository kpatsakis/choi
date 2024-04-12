void fun()
{
  char entity_7[47] = "";
  char entity_0 = 'T';
  char* entity_6;
  memset(entity_7, 'p', 47-1);
  entity_7[47-1]='0';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_7);
}
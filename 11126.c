void fun()
{
  char entity_2[16] = "";
  char* entity_0;
  memset(entity_2, 'e', 16-1);
  entity_2[16-1]='0';
  entity_0 = (char*)malloc(1*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_2);
}
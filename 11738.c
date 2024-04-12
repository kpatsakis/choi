void fun()
{
  char entity_2[93] = "";
  char* entity_8;
  entity_8 = (char*)malloc(54*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'r', 93-1);
  entity_2[93-1]='0';
  strcpy(entity_8, entity_2);
}
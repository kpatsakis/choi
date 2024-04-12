void fun()
{
  char* entity_8;
  char entity_7[67] = "";
  memset(entity_7, 'Z', 67-1);
  entity_7[67-1]='0';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_7);
}
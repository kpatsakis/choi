void fun()
{
  char entity_2[92] = "";
  char* entity_8;
  entity_8 = (char*)malloc(27*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'N', 92-1);
  entity_2[92-1]='0';
  strcpy(entity_8, entity_2);
}
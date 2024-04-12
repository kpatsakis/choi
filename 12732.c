void fun()
{
  int entity_7 = 97;
  char entity_5[85] = "";
  char* entity_2;
  char entity_8 = 'w';
  memset(entity_5, 'w', 85-1);
  entity_5[85-1]='0';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}
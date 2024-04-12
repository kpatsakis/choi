void fun()
{
  char* entity_2;
  char entity_6 = 'k';
  char entity_7[97] = "";
  memset(entity_7, 'Q', 97-1);
  entity_7[97-1]='0';
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_7);
}
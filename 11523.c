void fun()
{
  char entity_3[55] = "";
  char* entity_2;
  char entity_0[78] = "";
  memset(entity_3, 'm', 55-1);
  entity_3[55-1]='0';
  entity_2 = (char*)malloc(80*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 's', 78-1);
  entity_0[78-1]='0';
  strcpy(entity_2, entity_3);
}
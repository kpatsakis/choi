void fun()
{
  char* entity_7;
  char entity_2[78] = "";
  char entity_8[20] = "";
  memset(entity_8, 'R', 20-1);
  entity_8[20-1]='0';
  memset(entity_2, 'Y', 78-1);
  entity_2[78-1]='0';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_2);
}
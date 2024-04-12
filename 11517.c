void fun()
{
  char* entity_1;
  char entity_8[17] = "";
  char* entity_2;
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'g', 17-1);
  entity_8[17-1]='0';
  strcpy(entity_2, entity_8);
}
void fun()
{
  int entity_6 = 6;
  char entity_3[21] = "";
  char* entity_2;
  char entity_5[entity_6] = "";
  memset(entity_5, 'J', entity_6-1);
  entity_5[entity_6-1]='0';
  memset(entity_3, 'Q', 21-1);
  entity_3[21-1]='0';
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[0]='0';
  entity_6 = 61;
  strcpy(entity_2, entity_5);
}
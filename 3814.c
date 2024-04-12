void fun()
{
  int entity_1 = 35;
  int entity_0 = 37;
  entity_1 = 70;
  char* entity_2;
  char entity_8[82] = "";
  entity_8 = NULL;
  char entity_6 = 'O';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_8, 'G', 82-1);
  entity_8[82-1]='';
  strcpy(entity_2, entity_8);
}
void fun()
{
  int entity_1 = 5;
  int entity_8 = 43;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_3;
  char* entity_6;
  memset(entity_2, 'X', entity_8-1);
  entity_2[entity_8-1]='';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[21-1]='';
  entity_6 = (char*)malloc(20*sizeof(char));
  entity_6[20-1]='';
  strcpy(entity_3, entity_2);
}
void fun()
{
  int entity_2 = 3;
  int entity_8 = 6;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  memset(entity_3, 'C', entity_2-1);
  entity_3[entity_2-1]='';
  entity_2 = 88;
  entity_3[7] = 'i';
}
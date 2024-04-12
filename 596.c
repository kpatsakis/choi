void fun()
{
  int entity_4 = 95;
  entity_4 = 96;
  char* entity_7;
  char entity_0[87] = "";
  entity_0 = NULL;
  char entity_2[47] = "";
  entity_2 = NULL;
  char entity_1 = 'o';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_2, 'r', 47-1);
  entity_2[47-1]='';
  memset(entity_0, 'i', 87-1);
  entity_0[87-1]='';
  strcpy(entity_7, entity_0);
}
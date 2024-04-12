void fun()
{
  int entity_2 = 92;
  int entity_3 = 15;
  char entity_8[70] = "";
  entity_8 = NULL;
  char* entity_6;
  char* entity_1;
  memset(entity_8, 'b', 70-1);
  entity_8[70-1]='';
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  entity_2 = 51;
  strcpy(entity_1, entity_8);
}
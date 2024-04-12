void fun()
{
  int entity_2 = 85;
  char entity_1[8] = "";
  entity_1 = NULL;
  char* entity_3;
  char entity_8[61] = "";
  entity_8 = NULL;
  char entity_6 = 'k';
  memset(entity_8, 'b', 61-1);
  entity_8[61-1]='';
  memset(entity_1, 'I', 8-1);
  entity_1[8-1]='';
  entity_3 = (char*)malloc(70*sizeof(char));
  entity_3[70-1]='';
  entity_8[entity_2] = 'r';
}
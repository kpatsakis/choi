void fun()
{
  int entity_8 = 25;
  char* entity_3;
  char entity_7[8] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  memset(entity_7, 'P', 8-1);
  entity_7[8-1]='';
  entity_8 = 41;
  entity_7[entity_8] = 'k';
}
void fun()
{
  int entity_2 = 44;
  int entity_8 = 77;
  int entity_1 = 4;
  char* entity_4;
  char entity_7[44] = "";
  entity_7 = NULL;
  memset(entity_7, 'J', 44-1);
  entity_7[44-1]='';
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[51-1]='';
  entity_8 = 81;
  entity_7[entity_8] = 'V';
}
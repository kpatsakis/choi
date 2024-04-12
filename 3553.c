void fun()
{
  int entity_3 = 67;
  char* entity_1;
  char entity_8[89] = "";
  entity_8 = NULL;
  memset(entity_8, 't', 89-1);
  entity_8[89-1]='';
  entity_1 = (char*)malloc(53*sizeof(char));
  entity_1[53-1]='';
  entity_3 = 50;
  entity_8[entity_3] = 'y';
}
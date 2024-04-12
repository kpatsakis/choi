void fun()
{
  int entity_2 = 2;
  char* entity_5;
  char entity_8[85] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(20*sizeof(char));
  entity_5[20-1]='';
  memset(entity_8, 'I', 85-1);
  entity_8[85-1]='';
  entity_2 = 23;
  entity_8[entity_2] = 'd';
}
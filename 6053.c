void fun()
{
  int entity_2 = 64;
  char* entity_7;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_0 = 'z';
  memset(entity_5, 'B', entity_2-1);
  entity_5[entity_2-1]='';
  entity_7 = (char*)malloc(87*sizeof(char));
  entity_7[87-1]='';
  entity_5[55] = 'x';
}
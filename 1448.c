void fun()
{
  int entity_2 = 53;
  entity_2 = 16;
  char* entity_1;
  char entity_7[47] = "";
  entity_7 = NULL;
  memset(entity_7, 'H', 47-1);
  entity_7[47-1]='';
  entity_1 = (char*)malloc(48*sizeof(char));
  entity_1[48-1]='';
  entity_7[entity_2] = 'S';
}
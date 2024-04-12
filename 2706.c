void fun()
{
  int entity_8 = 49;
  char entity_6 = 'H';
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'y', entity_8-1);
  entity_3[entity_8-1]='';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  entity_3[63] = 'r';
}
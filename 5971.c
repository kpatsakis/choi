void fun()
{
  int entity_6 = 47;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'Q', entity_6-1);
  entity_8[entity_6-1]='';
  entity_7 = (char*)malloc(49*sizeof(char));
  entity_7[49-1]='';
  entity_6 = 57;
  entity_8[67] = 'F';
}
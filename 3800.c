void fun()
{
  int entity_7 = 96;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  memset(entity_4, 'Z', entity_7-1);
  entity_4[entity_7-1]='';
  entity_4[14] = 'k';
}
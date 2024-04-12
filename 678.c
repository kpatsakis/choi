void fun()
{
  int entity_2 = 98;
  char* entity_6;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(35*sizeof(char));
  entity_6[35-1]='';
  memset(entity_8, 'Y', entity_2-1);
  entity_8[entity_2-1]='';
  entity_8[18] = 'Z';
}
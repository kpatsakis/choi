void fun()
{
  int entity_3 = 55;
  char* entity_8;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(35*sizeof(char));
  entity_8[35-1]='';
  memset(entity_6, 'N', entity_3-1);
  entity_6[entity_3-1]='';
  entity_3 = 59;
  entity_6[21] = 'u';
}
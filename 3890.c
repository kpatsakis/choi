void fun()
{
  int entity_7 = 40;
  char* entity_8;
  char entity_5[27] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(92*sizeof(char));
  entity_8[92-1]='';
  memset(entity_5, 'U', 27-1);
  entity_5[27-1]='';
  entity_5[entity_7] = 'K';
}
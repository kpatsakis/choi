void fun()
{
  int entity_0 = 75;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'H', entity_0-1);
  entity_8[entity_0-1]='';
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  entity_8[8] = 'b';
}
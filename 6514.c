void fun()
{
  int entity_9 = 65;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  memset(entity_8, 'g', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[1] = 'v';
}
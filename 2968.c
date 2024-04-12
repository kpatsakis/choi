void fun()
{
  int entity_9 = 17;
  int entity_0 = 25;
  entity_0 = 70;
  char entity_4 = 'O';
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(92*sizeof(char));
  entity_8[92-1]='';
  memset(entity_6, 'M', entity_0-1);
  entity_6[entity_0-1]='';
  memcpy(entity_8, entity_6, entity_0*sizeof(char));
}
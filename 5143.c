void fun()
{
  int entity_9 = 75;
  int entity_7 = 66;
  char* entity_5;
  char entity_8[92] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', 92-1);
  entity_8[92-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memcpy(entity_5, entity_8, 92*sizeof(char));
}
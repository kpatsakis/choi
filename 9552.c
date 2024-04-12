void fun()
{
  int entity_9 = 81;
  entity_9 = 100;
  char entity_8[92] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_8, 'r', 92-1);
  entity_8[92-1]='';
  memcpy(entity_3, entity_8, 92*sizeof(char));
}
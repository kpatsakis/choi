void fun()
{
  int entity_0 = 37;
  int entity_6 = 40;
  char entity_1[92] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_1, 'Z', 92-1);
  entity_1[92-1]='';
  memcpy(entity_3, entity_1, 92*sizeof(char));
}
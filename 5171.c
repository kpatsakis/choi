void fun()
{
  int entity_0 = 77;
  entity_0 = 70;
  char entity_3[92] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_1 = 't';
  char entity_8[74] = "";
  entity_8 = NULL;
  memset(entity_8, 'Z', 74-1);
  entity_8[74-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_3, 'm', 92-1);
  entity_3[92-1]='';
  memcpy(entity_7, entity_3, 92*sizeof(char));
}
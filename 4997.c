void fun()
{
  int entity_8 = 21;
  char* entity_2;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char entity_1 = 'D';
  memset(entity_6, 'N', entity_8-1);
  entity_6[entity_8-1]='';
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  memcpy(entity_2, entity_6, entity_8*sizeof(char));
}
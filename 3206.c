void fun()
{
  char entity_2 = 'z';
  char entity_0[85] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'S', 85-1);
  entity_0[85-1]='';
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  memcpy(entity_4, entity_0, 85*sizeof(char));
}
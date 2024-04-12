void fun()
{
  char* entity_6;
  char entity_1 = 'u';
  char entity_3[91] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'E', 91-1);
  entity_3[91-1]='';
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  entity_3[70] = 't';
}